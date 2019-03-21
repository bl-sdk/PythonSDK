#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDescriptionEntry()
{
    class_< FDescriptionEntry >("FDescriptionEntry", no_init)
        .def_readwrite("EventID", &FDescriptionEntry::EventID)
        .def_readwrite("Description", &FDescriptionEntry::Description)
  ;
}