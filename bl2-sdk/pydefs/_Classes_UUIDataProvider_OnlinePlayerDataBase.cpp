#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataProvider_OnlinePlayerDataBase(py::module &m)
{
    py::class_< UUIDataProvider_OnlinePlayerDataBase,  UUIDataProvider   >(m, "UUIDataProvider_OnlinePlayerDataBase")
        .def_readwrite("PlayerControllerId", &UUIDataProvider_OnlinePlayerDataBase::PlayerControllerId)
        .def("eventOnUnregister", &UUIDataProvider_OnlinePlayerDataBase::eventOnUnregister)
        .def("eventOnRegister", &UUIDataProvider_OnlinePlayerDataBase::eventOnRegister)
          ;
}