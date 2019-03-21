#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USaveGameSummary()
{
    class_< USaveGameSummary, bases< UObject >  , boost::noncopyable>("USaveGameSummary", no_init)
        .def_readwrite("BaseLevel", &USaveGameSummary::BaseLevel)
        .def_readwrite("Description", &USaveGameSummary::Description)
        .def("StaticClass", &USaveGameSummary::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}