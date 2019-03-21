#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeBlendDirectional()
{
    class_< UWillowAnimNodeBlendDirectional, bases< UAnimNodeBlendBase >  , boost::noncopyable>("UWillowAnimNodeBlendDirectional", no_init)
        .def_readwrite("DirDegreesPerSecond", &UWillowAnimNodeBlendDirectional::DirDegreesPerSecond)
        .def_readwrite("SingleAnimAtOrAboveLOD", &UWillowAnimNodeBlendDirectional::SingleAnimAtOrAboveLOD)
        .def_readwrite("BlendTime", &UWillowAnimNodeBlendDirectional::BlendTime)
        .def_readwrite("DirAngle", &UWillowAnimNodeBlendDirectional::DirAngle)
        .def("StaticClass", &UWillowAnimNodeBlendDirectional::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}