#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDevelopmentDownloadableContentEnumerator()
{
    class_< UDevelopmentDownloadableContentEnumerator, bases< UDownloadableContentEnumerator >  , boost::noncopyable>("UDevelopmentDownloadableContentEnumerator", no_init)
        .def("StaticClass", &UDevelopmentDownloadableContentEnumerator::StaticClass, return_value_policy< reference_existing_object >())
        .def("InstallAllDLC", &UDevelopmentDownloadableContentEnumerator::InstallAllDLC)
        .staticmethod("StaticClass")
  ;
}