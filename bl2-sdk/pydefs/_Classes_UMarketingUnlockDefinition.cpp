#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMarketingUnlockDefinition()
{
    class_< UMarketingUnlockDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UMarketingUnlockDefinition", no_init)
        .def_readwrite("UnlockCode", &UMarketingUnlockDefinition::UnlockCode)
        .def_readwrite("DialogLocFile", &UMarketingUnlockDefinition::DialogLocFile)
        .def_readwrite("DialogLocSection", &UMarketingUnlockDefinition::DialogLocSection)
        .def("StaticClass", &UMarketingUnlockDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}