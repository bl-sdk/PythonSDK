#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBodyCompositionData()
{
    class_< FBodyCompositionData >("FBodyCompositionData", no_init)
        .def_readwrite("Attachments", &FBodyCompositionData::Attachments)
        .def_readwrite("MaxExpectedComponents", &FBodyCompositionData::MaxExpectedComponents)
  ;
}