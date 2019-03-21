#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDefinitionIconDatum()
{
    class_< FDefinitionIconDatum >("FDefinitionIconDatum", no_init)
        .def_readwrite("DefColor", &FDefinitionIconDatum::DefColor)
        .def_readwrite("DefIcon", &FDefinitionIconDatum::DefIcon)
        .def_readwrite("DefClass", &FDefinitionIconDatum::DefClass)
  ;
}