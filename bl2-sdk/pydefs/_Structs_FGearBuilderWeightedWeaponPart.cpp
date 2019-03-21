#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGearBuilderWeightedWeaponPart()
{
    class_< FGearBuilderWeightedWeaponPart >("FGearBuilderWeightedWeaponPart", no_init)
        .def_readwrite("Part", &FGearBuilderWeightedWeaponPart::Part)
        .def_readwrite("Weight", &FGearBuilderWeightedWeaponPart::Weight)
        .def_readwrite("ProbabilityOfPickingThisPart", &FGearBuilderWeightedWeaponPart::ProbabilityOfPickingThisPart)
  ;
}