#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSettingsProperty()
{
    class_< FSettingsProperty >("FSettingsProperty", no_init)
        .def_readwrite("PropertyId", &FSettingsProperty::PropertyId)
        .def_readwrite("Data", &FSettingsProperty::Data)
        .def_readwrite("AdvertisementType", &FSettingsProperty::AdvertisementType)
  ;
}