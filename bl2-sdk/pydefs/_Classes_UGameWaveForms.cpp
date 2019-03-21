#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGameWaveForms()
{
    class_< UGameWaveForms, bases< UObject >  , boost::noncopyable>("UGameWaveForms", no_init)
        .def_readwrite("CameraShakeMediumShort", &UGameWaveForms::CameraShakeMediumShort)
        .def_readwrite("CameraShakeMediumLong", &UGameWaveForms::CameraShakeMediumLong)
        .def_readwrite("CameraShakeBigShort", &UGameWaveForms::CameraShakeBigShort)
        .def_readwrite("CameraShakeBigLong", &UGameWaveForms::CameraShakeBigLong)
        .def("StaticClass", &UGameWaveForms::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}