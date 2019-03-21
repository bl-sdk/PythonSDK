#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataStore_GameState()
{
    class_< UUIDataStore_GameState, bases< UUIDataStore >  , boost::noncopyable>("UUIDataStore_GameState", no_init)
        .def("StaticClass", &UUIDataStore_GameState::StaticClass, return_value_policy< reference_existing_object >())
        .def("NotifyGameSessionEnded", &UUIDataStore_GameState::NotifyGameSessionEnded)
        .def("OnRefreshDataFieldValue", &UUIDataStore_GameState::OnRefreshDataFieldValue)
        .staticmethod("StaticClass")
  ;
}