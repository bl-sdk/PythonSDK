#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AMatineePawn()
{
    class_< AMatineePawn, bases< APawn >  , boost::noncopyable>("AMatineePawn", no_init)
        .def("StaticClass", &AMatineePawn::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}