#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxActorMoviePool()
{
    class_< UGFxActorMoviePool, bases< UObject >  , boost::noncopyable>("UGFxActorMoviePool", no_init)
        .def_readwrite("MovieDefinition", &UGFxActorMoviePool::MovieDefinition)
        .def_readwrite("Pools", &UGFxActorMoviePool::Pools)
        .def_readwrite("MovieTargets", &UGFxActorMoviePool::MovieTargets)
        .def("StaticClass", &UGFxActorMoviePool::StaticClass, return_value_policy< reference_existing_object >())
        .def("DisplayDebug", &UGFxActorMoviePool::DisplayDebug)
        .def("GetPoolName", &UGFxActorMoviePool::GetPoolName)
        .def("PoolStyleString", &UGFxActorMoviePool::PoolStyleString)
        .def("MovieStateChanged", &UGFxActorMoviePool::MovieStateChanged)
        .staticmethod("StaticClass")
  ;
}