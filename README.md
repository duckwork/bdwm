# Bob Dole Window Manager

_No, **you're** [Bob Dole][]!_

![The man himself, ladies and gentlemen.](img/dole.jpg)

That's right, I'm writing a window manager\* named after the guy who ran against
Bill Clinton and apparently blinked a lot.  I'm writing it because I want to
use [wmutils][] without worrying about handling the mouse, [swm][] is *too*
simple, and [2bwm][] and friends are a little more than I bargained for.  Also
I'm definitely procrastinating somehow.  At least this is better than porn!

\* By which, of course, I mean I'm *forking* a wm from swm.  WHATEVER

[Bob Dole]: http://www.bobdole.org
[wmutils]: https://github.com/wmutils
[swm]: https://github.com/dcat/swm
[2bwm]: https://github.com/venam/2bwm

## Installing

    git clone https://github.com/duckwork/bdwm
    cd bdwm
    make && sudo make install

## Features on top of SWM

- Doesn't crash on resize (uses abs(3) like 2bwm)
- TODO: loads colors from Xresources

## Screenshot

TODO
