#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataProvider_OnlinePlayerDataBase()
{
    class_< UUIDataProvider_OnlinePlayerDataBase, bases< UUIDataProvider >  , boost::noncopyable>("UUIDataProvider_OnlinePlayerDataBase", no_init)
        .def_readwrite("PlayerControllerId", &UUIDataProvider_OnlinePlayerDataBase::PlayerControllerId)
        .def("StaticClass", &UUIDataProvider_OnlinePlayerDataBase::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventOnUnregister", &UUIDataProvider_OnlinePlayerDataBase::eventOnUnregister)
        .def("eventOnRegister", &UUIDataProvider_OnlinePlayerDataBase::eventOnRegister)
        .staticmethod("StaticClass")
  ;
}