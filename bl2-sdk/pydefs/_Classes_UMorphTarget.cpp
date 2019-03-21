#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMorphTarget()
{
    py::class_< UMorphTarget,  UObject   >("UMorphTarget")
        .def_readwrite("MorphLODModels", &UMorphTarget::MorphLODModels)
        .def_readwrite("MaterialSlotId", &UMorphTarget::MaterialSlotId)
        .def_readwrite("ScalarParameterName", &UMorphTarget::ScalarParameterName)
        .def("StaticClass", &UMorphTarget::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}