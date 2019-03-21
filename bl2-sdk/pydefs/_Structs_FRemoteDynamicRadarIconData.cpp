#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRemoteDynamicRadarIconData()
{
    class_< FRemoteDynamicRadarIconData >("FRemoteDynamicRadarIconData", no_init)
        .def_readwrite("IconType", &FRemoteDynamicRadarIconData::IconType)
        .def_readwrite("Location", &FRemoteDynamicRadarIconData::Location)
  ;
}