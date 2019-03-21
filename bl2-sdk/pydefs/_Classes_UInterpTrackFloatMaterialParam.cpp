#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackFloatMaterialParam()
{
    py::class_< UInterpTrackFloatMaterialParam,  UInterpTrack   >("UInterpTrackFloatMaterialParam")
        .def_readwrite("Materials", &UInterpTrackFloatMaterialParam::Materials)
        .def_readwrite("Material", &UInterpTrackFloatMaterialParam::Material)
        .def_readwrite("ParamName", &UInterpTrackFloatMaterialParam::ParamName)
        .def_readwrite("FloatTrack", &UInterpTrackFloatBase::FloatTrack)
        .def_readwrite("CurveTension", &UInterpTrackFloatBase::CurveTension)
        .def("StaticClass", &UInterpTrackFloatMaterialParam::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}