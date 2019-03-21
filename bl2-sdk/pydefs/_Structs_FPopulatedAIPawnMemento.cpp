#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPopulatedAIPawnMemento()
{
    class_< FPopulatedAIPawnMemento >("FPopulatedAIPawnMemento", no_init)
        .def_readwrite("PawnWeapons", &FPopulatedAIPawnMemento::PawnWeapons)
        .def_readwrite("PawnItems", &FPopulatedAIPawnMemento::PawnItems)
  ;
}