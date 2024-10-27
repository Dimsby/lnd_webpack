<nav class="navbar noselect navbar-expand-lg nav-outer navbar-<%=type%>">
    <div class="container-outer d-flex">
        <a class="navbar-brand align-self-center" href="index.html">
            <img src="images/logo-<%=type%>.svg" width="164" height="28"/>
        </a>

        <button class="navbar-toggler toggler-open navbar-toggler-right ml-auto" type="button" data-toggle="collapse"
                data-target="#main-menu" id="toggler-open">
            <span class="navbar-toggler-icon"></span>
        </button>

        <div class="collapse navbar-collapse" id="main-menu">
            <button class="d-block d-lg-none navbar-toggler toggler-close navbar-toggler-right close mr-auto"
                    type="button" data-toggle="collapse"
                    data-target="#main-menu" id="toggler-close">
                <span aria-hidden="true">&times;</span>
            </button>
            <div class="container-inner">
                <div class="row align-baseline">

                    <div class="col-12 col-lg">

                        <ul class="navbar-nav navbar-left">
                            <li class="nav-item">
                                <a class="nav-link <% if(page == 'features') { %>active <% } %>" href="features.html">Features</a>
                            </li>
                            <li class="nav-item dropdown dropdown-<%=type%>">
                                <a class="nav-link <% if(page == 'solutions') { %>active <% } %>" href="#" role="button" data-toggle="dropdown"
                                   aria-haspopup="true" aria-expanded="false">Solutions <span
                                            class="dropdown-toggle"></span></a>
                                <div class="dropdown-menu">
                                    <a class="dropdown-item" href="solutions-live.html">Live Streaming</a>
                                    <a class="dropdown-item" href="solutions-video.html">Video Conferencing</a>
                                    <a class="dropdown-item" href="solutions-learning.html">E-learning</a>
                                </div>
                            </li>
                            <% /*
                            <li class="nav-item">
                                <a class="nav-link" href="developers.html">Developers</a>
                            </li>
                            <li class="nav-item">
                                <a class="nav-link" href="blog.html">Blog</a>
                            </li>
                            */ %>
                        </ul>
                    </div>

                    <div class="col-12 col-lg">
                        <ul class="navbar-nav navbar-right">
                            <li class="nav-item">
                                <a class="nav-link pl-0 <% if(page == 'pricing') { %>active <% } %>" href="pricing.html">Pricing</a>
                            </li>
                            <li class="nav-item">
                                <a class="nav-link <% if(page == 'development') { %>active <% } %>" href="development.html">WebRTC Development</a>
                            </li>
                            <li class="nav-item">
                                <a class="nav-link <% if(page == 'about') { %>active<% } %>" href="about.html">About</a>
                            </li>
                        </ul>
                    </div>

                </div>
            </div>

            <ul class="navbar-nav navbar-login">
                <li class="nav-item nav-divider d-none d-lg-block"></li>
                <li class="nav-item">
                    <a class="nav-link" href="#">Login</a>
                </li>
                <li class="nav-item">
                    <a class="nav-link btn" href="#">Sign Up</a>
                </li>
            </ul>

        </div>
    </div>
</nav>