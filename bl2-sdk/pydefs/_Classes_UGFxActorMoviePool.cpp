#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxActorMoviePool(py::module &m)
{
    py::class_< UGFxActorMoviePool,  UObject   >(m, "UGFxActorMoviePool")
        .def_readwrite("MovieDefinition", &UGFxActorMoviePool::MovieDefinition)
        .def_readwrite("Pools", &UGFxActorMoviePool::Pools)
        .def_readwrite("MovieTargets", &UGFxActorMoviePool::MovieTargets)
        .def("StaticClass", &UGFxActorMoviePool::StaticClass, py::return_value_policy::reference)
        .def("DisplayDebug", &UGFxActorMoviePool::DisplayDebug)
        .def("GetPoolName", &UGFxActorMoviePool::GetPoolName)
        .def("PoolStyleString", &UGFxActorMoviePool::PoolStyleString)
        .def("MovieStateChanged", &UGFxActorMoviePool::MovieStateChanged)
          ;
}