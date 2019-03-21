#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTextureCube()
{
    class_< UTextureCube, bases< UTexture >  , boost::noncopyable>("UTextureCube", no_init)
        .def_readwrite("SizeX", &UTextureCube::SizeX)
        .def_readwrite("SizeY", &UTextureCube::SizeY)
        .def_readwrite("Format", &UTextureCube::Format)
        .def_readwrite("NumMips", &UTextureCube::NumMips)
        .def_readwrite("FacePosX", &UTextureCube::FacePosX)
        .def_readwrite("FaceNegX", &UTextureCube::FaceNegX)
        .def_readwrite("FacePosY", &UTextureCube::FacePosY)
        .def_readwrite("FaceNegY", &UTextureCube::FaceNegY)
        .def_readwrite("FacePosZ", &UTextureCube::FacePosZ)
        .def_readwrite("FaceNegZ", &UTextureCube::FaceNegZ)
        .def("StaticClass", &UTextureCube::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}