#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMorphTarget(py::module &m)
{
    py::class_< UMorphTarget,  UObject   >(m, "UMorphTarget")
        .def_readwrite("MorphLODModels", &UMorphTarget::MorphLODModels)
        .def_readwrite("MaterialSlotId", &UMorphTarget::MaterialSlotId)
        .def_readwrite("ScalarParameterName", &UMorphTarget::ScalarParameterName)
          ;
}