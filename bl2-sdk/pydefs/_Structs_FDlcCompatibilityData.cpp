#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDlcCompatibilityData()
{
    class_< FDlcCompatibilityData >("FDlcCompatibilityData", no_init)
        .def_readwrite("A", &FDlcCompatibilityData::A)
        .def_readwrite("B", &FDlcCompatibilityData::B)
        .def_readwrite("C", &FDlcCompatibilityData::C)
        .def_readwrite("D", &FDlcCompatibilityData::D)
  ;
}