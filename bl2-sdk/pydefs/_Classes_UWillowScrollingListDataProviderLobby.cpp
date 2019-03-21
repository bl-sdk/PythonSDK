#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderLobby()
{
    class_< UWillowScrollingListDataProviderLobby, bases< UWillowScrollingListDataProviderBase >  , boost::noncopyable>("UWillowScrollingListDataProviderLobby", no_init)
        .def("StaticClass", &UWillowScrollingListDataProviderLobby::StaticClass, return_value_policy< reference_existing_object >())
        .def("Populate", &UWillowScrollingListDataProviderLobby::Populate)
        .def("HandleClick", &UWillowScrollingListDataProviderLobby::HandleClick)
        .staticmethod("StaticClass")
  ;
}