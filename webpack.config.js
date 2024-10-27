const webpack = require('webpack');
const path = require('path');
const fs = require('fs');

const HTMLWebpackPlugin = require('html-webpack-plugin');
const MiniCssExtractPlugin = require('mini-css-extract-plugin');

function generateHtmlPlugins (templateDir) {
    const templateFiles = fs.readdirSync(path.resolve(__dirname, templateDir))
    return templateFiles.map(item => {
        // Split names and extension
        const parts = item.split('.')
        const name = parts[0]
        const extension = parts[1]
        return new HTMLWebpackPlugin({
            filename: `${name}.html`,
            minify: false,
            template: path.resolve(__dirname, `${templateDir}/${name}.${extension}`)
        })
    })
}

module.exports = env => {
    return {
        entry: [
            '/src/js/app.js',
        ],
        output: {
            filename: 'js/bundle.js',
            path: path.resolve(__dirname, 'dist')
        },
        module: {
            rules: [
                {
                    test: /\.js$/,
                    exclude: /node_modules/,
                    use: [],
                },
                {
                    test: /\.scss$/,
                    use: [
                        MiniCssExtractPlugin.loader,
                        { loader: 'css-loader', options: { url: false, sourceMap: true } },
                        { loader: 'sass-loader', options: { sourceMap: true } }
                    ],
                },
                {
                    test: /\.inc$/,
                    include: path.resolve(__dirname, 'src/parts'),
                    loader: 'html-loader',
                    options: {
                        // Disables attributes processing
                        attributes: false
                    },
                },
            ]
        },
        plugins: [
            new MiniCssExtractPlugin({
                filename: env.production ? 'css/[name].[fullhash].min.css' : 'css/[name].min.css'
            }),
            new webpack.ProvidePlugin({
                $: "jquery",
                jQuery: "jquery"
            })
        ].concat(generateHtmlPlugins('src/html'))
    }
};