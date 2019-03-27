#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGearBuilderWeightedWeaponPart(py::module &m)
{
    py::class_< FGearBuilderWeightedWeaponPart >(m, "FGearBuilderWeightedWeaponPart")
        .def_readwrite("Part", &FGearBuilderWeightedWeaponPart::Part)
        .def_readwrite("Weight", &FGearBuilderWeightedWeaponPart::Weight)
        .def_readwrite("ProbabilityOfPickingThisPart", &FGearBuilderWeightedWeaponPart::ProbabilityOfPickingThisPart)
  ;
}