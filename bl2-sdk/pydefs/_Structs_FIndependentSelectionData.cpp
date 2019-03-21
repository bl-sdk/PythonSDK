#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FIndependentSelectionData()
{
    class_< FIndependentSelectionData >("FIndependentSelectionData", no_init)
        .def_readwrite("Probability", &FIndependentSelectionData::Probability)
        .def_readwrite("Behaviors", &FIndependentSelectionData::Behaviors)
  ;
}