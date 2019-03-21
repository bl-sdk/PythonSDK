#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULevel()
{
    class_< ULevel, bases< UObject >  , boost::noncopyable>("ULevel", no_init)
        .def_readonly("UnknownData00", &ULevel::UnknownData00)
        .def_readwrite("LightmapTotalSize", &ULevel::LightmapTotalSize)
        .def_readwrite("ShadowmapTotalSize", &ULevel::ShadowmapTotalSize)
        .def_readonly("UnknownData01", &ULevel::UnknownData01)
        .def("StaticClass", &ULevel::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}