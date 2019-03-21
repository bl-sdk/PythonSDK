#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDownloadableFixupAIPawnNamesDefinition()
{
    class_< UDownloadableFixupAIPawnNamesDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UDownloadableFixupAIPawnNamesDefinition", no_init)
        .def_readwrite("PlayThroughThree", &UDownloadableFixupAIPawnNamesDefinition::PlayThroughThree)
        .def("StaticClass", &UDownloadableFixupAIPawnNamesDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}