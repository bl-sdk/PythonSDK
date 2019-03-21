#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNodeBlendDirectional()
{
    class_< UAnimNodeBlendDirectional, bases< UAnimNodeBlendBase >  , boost::noncopyable>("UAnimNodeBlendDirectional", no_init)
        .def_readwrite("DirDegreesPerSecond", &UAnimNodeBlendDirectional::DirDegreesPerSecond)
        .def_readwrite("DirAngle", &UAnimNodeBlendDirectional::DirAngle)
        .def_readwrite("SingleAnimAtOrAboveLOD", &UAnimNodeBlendDirectional::SingleAnimAtOrAboveLOD)
        .def_readwrite("RotationOffset", &UAnimNodeBlendDirectional::RotationOffset)
        .def("StaticClass", &UAnimNodeBlendDirectional::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}