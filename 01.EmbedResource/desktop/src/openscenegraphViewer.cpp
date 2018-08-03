
/*
This file is part of OpenSceneGraph cross-platform examples:
  https://github.com/OGStudio/openscenegraph-cross-platform-examples

Copyright (C) 2018 Opensource Game Studio

This software is provided 'as-is', without any express or implied
warranty.  In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not
   claim that you wrote the original software. If you use this software
   in a product, an acknowledgment in the product documentation would be
   appreciated but is not required.
2. Altered source versions must be plainly marked as such, and must not be
   misrepresented as being the original software.
3. This notice may not be removed or altered from any source distribution.
*/

// osgViewer-desktop Start

#ifdef __APPLE__
    #warning "Provide macOS windowing system"
#else
    #include "src/osgViewer/GraphicsWindowX11.cpp"
    #include "src/osgViewer/PixelBufferX11.cpp"
#endif


#include "src/osgViewer/CompositeViewer.cpp"
#include "src/osgViewer/GraphicsWindow.cpp"
#include "src/osgViewer/Keystone.cpp"
#include "src/osgViewer/Renderer.cpp"
#include "src/osgViewer/Scene.cpp"
#include "src/osgViewer/View.cpp"
#include "src/osgViewer/ViewerBase.cpp"
#include "src/osgViewer/Viewer.cpp"
#include "src/osgViewer/config/AcrossAllScreens.cpp"
#include "src/osgViewer/config/SingleScreen.cpp"
#include "src/osgViewer/config/SingleWindow.cpp"
#include "src/osgViewer/config/SphericalDisplay.cpp"
#include "src/osgViewer/config/PanoramicSphericalDisplay.cpp"
#include "src/osgViewer/config/WoWVxDisplay.cpp"
// osgViewer-desktop End

