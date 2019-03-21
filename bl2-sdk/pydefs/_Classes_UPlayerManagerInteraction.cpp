#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerManagerInteraction()
{
    class_< UPlayerManagerInteraction, bases< UInteraction >  , boost::noncopyable>("UPlayerManagerInteraction", no_init)
        .def("StaticClass", &UPlayerManagerInteraction::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}