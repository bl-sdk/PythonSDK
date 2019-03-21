#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGearBuilderWeightedInventoryPart()
{
    class_< FGearBuilderWeightedInventoryPart >("FGearBuilderWeightedInventoryPart", no_init)
        .def_readwrite("Part", &FGearBuilderWeightedInventoryPart::Part)
        .def_readwrite("Weight", &FGearBuilderWeightedInventoryPart::Weight)
        .def_readwrite("ProbabilityOfPickingThisPart", &FGearBuilderWeightedInventoryPart::ProbabilityOfPickingThisPart)
  ;
}