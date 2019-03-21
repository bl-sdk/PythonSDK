#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSortableDataElement()
{
    class_< FSortableDataElement >("FSortableDataElement", no_init)
        .def_readwrite("OneTimeIdx", &FSortableDataElement::OneTimeIdx)
        .def_readwrite("CategoryIdx", &FSortableDataElement::CategoryIdx)
        .def_readwrite("Data", &FSortableDataElement::Data)
  ;
}