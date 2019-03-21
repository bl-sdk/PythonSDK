#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackFloatMaterialParam()
{
    class_< UInterpTrackFloatMaterialParam, bases< UInterpTrack >  , boost::noncopyable>("UInterpTrackFloatMaterialParam", no_init)
        .def_readwrite("Materials", &UInterpTrackFloatMaterialParam::Materials)
        .def_readwrite("Material", &UInterpTrackFloatMaterialParam::Material)
        .def_readwrite("ParamName", &UInterpTrackFloatMaterialParam::ParamName)
        .def_readwrite("FloatTrack", &UInterpTrackFloatBase::FloatTrack)
        .def_readwrite("CurveTension", &UInterpTrackFloatBase::CurveTension)
        .def("StaticClass", &UInterpTrackFloatMaterialParam::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}