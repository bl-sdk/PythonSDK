#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderMatchmaking()
{
    class_< UWillowScrollingListDataProviderMatchmaking, bases< UWillowScrollingListDataProviderBase >  , boost::noncopyable>("UWillowScrollingListDataProviderMatchmaking", no_init)
        .def("StaticClass", &UWillowScrollingListDataProviderMatchmaking::StaticClass, return_value_policy< reference_existing_object >())
        .def("Populate", &UWillowScrollingListDataProviderMatchmaking::Populate)
        .def("HandleClick", &UWillowScrollingListDataProviderMatchmaking::HandleClick)
        .staticmethod("StaticClass")
  ;
}