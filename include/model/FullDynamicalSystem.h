#ifndef DWL__MODEL__FULL_DYNAMICAL_SYSTEM__H
#define DWL__MODEL__FULL_DYNAMICAL_SYSTEM__H

#include <model/DynamicalSystem.h>


namespace dwl
{

namespace model
{

class FullDynamicalSystem : public DynamicalSystem
{
	public:
		/** @brief Constructor function */
		FullDynamicalSystem();

		/** @brief Destructor function */
		~FullDynamicalSystem();

		/**
		 * @brief Computes the dynamic constraint vector given a certain state
		 * @param Eigen::VectorXd& Evaluated constraint function
		 * @param const LocomotionState& State vector
		 */
		void computeDynamicalConstraint(Eigen::VectorXd& constraint,
										const LocomotionState& state);

		/**
		 * @brief Gets the bounds of the dynamical system constraint
		 * @param Eigen::VectorXd& Lower bounds
		 * @param Eigen::VectorXd& Upper bounds
		 */
		void getDynamicalBounds(Eigen::VectorXd& lower_bound,
								Eigen::VectorXd& upper_bound);

		/** @brief Virtual method for getting the constraint dimension */
		unsigned int defineConstraintDimension();
};

} //@namespace model
} //@namespace dwl

#endif
