#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxMovieManager()
{
    class_< UGFxMovieManager, bases< UObject >  , boost::noncopyable>("UGFxMovieManager", no_init)
        .def_readwrite("Subscribers", &UGFxMovieManager::Subscribers)
        .def_readwrite("MoviePools", &UGFxMovieManager::MoviePools)
        .def("StaticClass", &UGFxMovieManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("ChangeMovieState", &UGFxMovieManager::ChangeMovieState)
        .def("Unsubscribe", &UGFxMovieManager::Unsubscribe)
        .def("Subscribe", &UGFxMovieManager::Subscribe)
        .def("UnregisterMoviesDrawnTo", &UGFxMovieManager::UnregisterMoviesDrawnTo)
        .def("UnregisterTarget", &UGFxMovieManager::UnregisterTarget)
        .def("UnregisterMovie", &UGFxMovieManager::UnregisterMovie)
        .def("RegisterMovie", &UGFxMovieManager::RegisterMovie)
        .staticmethod("StaticClass")
  ;
}