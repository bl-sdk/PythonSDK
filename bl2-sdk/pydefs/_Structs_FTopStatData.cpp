#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTopStatData()
{
    class_< FTopStatData >("FTopStatData", no_init)
        .def_readwrite("LabelText", &FTopStatData::LabelText)
        .def_readwrite("ValueText", &FTopStatData::ValueText)
        .def_readwrite("AuxText", &FTopStatData::AuxText)
        .def_readwrite("Arrow", &FTopStatData::Arrow)
        .def_readwrite("IconName", &FTopStatData::IconName)
  ;
}