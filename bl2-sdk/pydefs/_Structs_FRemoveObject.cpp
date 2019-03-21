#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRemoveObject()
{
    class_< FRemoveObject >("FRemoveObject", no_init)
        .def_readwrite("Name", &FRemoveObject::Name)
  ;
}