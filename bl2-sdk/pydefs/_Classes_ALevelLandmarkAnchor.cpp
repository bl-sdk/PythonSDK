#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ALevelLandmarkAnchor()
{
    class_< ALevelLandmarkAnchor, bases< ALevelLandmark >  , boost::noncopyable>("ALevelLandmarkAnchor", no_init)
        .def_readwrite("Texture", &ALevelLandmarkAnchor::Texture)
        .def_readwrite("Opacity", &ALevelLandmarkAnchor::Opacity)
        .def_readwrite("TextureSizeX", &ALevelLandmarkAnchor::TextureSizeX)
        .def_readwrite("TextureSizeY", &ALevelLandmarkAnchor::TextureSizeY)
        .def_readwrite("MapFrame", &ALevelLandmarkAnchor::MapFrame)
        .def_readwrite("DLCMap", &ALevelLandmarkAnchor::DLCMap)
        .def("StaticClass", &ALevelLandmarkAnchor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}