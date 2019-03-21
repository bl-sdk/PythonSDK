#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGPMCollection()
{
    class_< FGPMCollection >("FGPMCollection", no_init)
        .def_readwrite("CollectionData", &FGPMCollection::CollectionData)
  ;
}