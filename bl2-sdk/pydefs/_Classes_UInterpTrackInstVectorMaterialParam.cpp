#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstVectorMaterialParam()
{
    py::class_< UInterpTrackInstVectorMaterialParam,  UInterpTrackInst   >("UInterpTrackInstVectorMaterialParam")
        .def_readwrite("MICInfos", &UInterpTrackInstVectorMaterialParam::MICInfos)
        .def_readwrite("InstancedTrack", &UInterpTrackInstVectorMaterialParam::InstancedTrack)
        .def("StaticClass", &UInterpTrackInstVectorMaterialParam::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}