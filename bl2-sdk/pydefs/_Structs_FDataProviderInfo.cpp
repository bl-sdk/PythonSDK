#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDataProviderInfo()
{
    class_< FDataProviderInfo >("FDataProviderInfo", no_init)
        .def_readwrite("DataProvider", &FDataProviderInfo::DataProvider)
        .def_readonly("UnknownData00", &FDataProviderInfo::UnknownData00)
        .def_readwrite("SelectedIndex", &FDataProviderInfo::SelectedIndex)
  ;
}