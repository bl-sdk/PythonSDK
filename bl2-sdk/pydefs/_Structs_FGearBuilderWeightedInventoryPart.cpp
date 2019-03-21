#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGearBuilderWeightedInventoryPart(py::object m)
{
    py::class_< FGearBuilderWeightedInventoryPart >(m, "FGearBuilderWeightedInventoryPart")
        .def_readwrite("Part", &FGearBuilderWeightedInventoryPart::Part)
        .def_readwrite("Weight", &FGearBuilderWeightedInventoryPart::Weight)
        .def_readwrite("ProbabilityOfPickingThisPart", &FGearBuilderWeightedInventoryPart::ProbabilityOfPickingThisPart)
  ;
}