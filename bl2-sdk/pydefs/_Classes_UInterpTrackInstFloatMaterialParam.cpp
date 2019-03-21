#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstFloatMaterialParam()
{
    py::class_< UInterpTrackInstFloatMaterialParam,  UInterpTrackInst   >("UInterpTrackInstFloatMaterialParam")
        .def_readwrite("MICInfos", &UInterpTrackInstFloatMaterialParam::MICInfos)
        .def_readwrite("InstancedTrack", &UInterpTrackInstFloatMaterialParam::InstancedTrack)
        .def("StaticClass", &UInterpTrackInstFloatMaterialParam::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}