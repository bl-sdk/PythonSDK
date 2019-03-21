#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderFrontEnd()
{
    class_< UWillowScrollingListDataProviderFrontEnd, bases< UWillowScrollingListDataProviderBase >  , boost::noncopyable>("UWillowScrollingListDataProviderFrontEnd", no_init)
        .def("StaticClass", &UWillowScrollingListDataProviderFrontEnd::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetSubmenuForEvent", &UWillowScrollingListDataProviderFrontEnd::GetSubmenuForEvent, return_value_policy< reference_existing_object >())
        .def("Populate", &UWillowScrollingListDataProviderFrontEnd::Populate)
        .def("HandleClick", &UWillowScrollingListDataProviderFrontEnd::HandleClick)
        .staticmethod("StaticClass")
  ;
}