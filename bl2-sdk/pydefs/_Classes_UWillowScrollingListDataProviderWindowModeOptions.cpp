#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderWindowModeOptions()
{
    class_< UWillowScrollingListDataProviderWindowModeOptions, bases< UWillowScrollingListDataProviderApplyRequiredOption >  , boost::noncopyable>("UWillowScrollingListDataProviderWindowModeOptions", no_init)
        .def("StaticClass", &UWillowScrollingListDataProviderWindowModeOptions::StaticClass, return_value_policy< reference_existing_object >())
        .def("HandleClick", &UWillowScrollingListDataProviderWindowModeOptions::HandleClick)
        .staticmethod("StaticClass")
  ;
}