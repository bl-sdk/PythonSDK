#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDecalData()
{
    class_< FDecalData >("FDecalData", no_init)
        .def_readwrite("Materials", &FDecalData::Materials)
        .def_readwrite("Width", &FDecalData::Width)
        .def_readwrite("Height", &FDecalData::Height)
        .def_readwrite("MinScale", &FDecalData::MinScale)
        .def_readwrite("MaxScale", &FDecalData::MaxScale)
  ;
}