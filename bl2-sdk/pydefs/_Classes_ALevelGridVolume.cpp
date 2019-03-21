#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ALevelGridVolume()
{
    class_< ALevelGridVolume, bases< AVolume >  , boost::noncopyable>("ALevelGridVolume", no_init)
        .def_readwrite("LevelGridVolumeName", &ALevelGridVolume::LevelGridVolumeName)
        .def_readwrite("CellShape", &ALevelGridVolume::CellShape)
        .def_readonly("Subdivisions", &ALevelGridVolume::Subdivisions)
        .def_readwrite("LoadingDistance", &ALevelGridVolume::LoadingDistance)
        .def_readwrite("KeepLoadedRange", &ALevelGridVolume::KeepLoadedRange)
        .def_readwrite("CellConvexElem", &ALevelGridVolume::CellConvexElem)
        .def("StaticClass", &ALevelGridVolume::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}