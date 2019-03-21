#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FItemMemento()
{
    class_< FItemMemento >("FItemMemento", no_init)
        .def_readwrite("SerialNumber", &FItemMemento::SerialNumber)
  ;
}