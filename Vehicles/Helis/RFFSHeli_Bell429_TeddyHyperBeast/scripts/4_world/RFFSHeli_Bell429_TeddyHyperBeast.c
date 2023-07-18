class RFFSHeli_Bell429_TeddyHyperBeast extends RFFSHeli_Bell429
{
	void RFFSHeli_Bell429_TeddyHyperBeast() 
	{
		c_heli_wreck_model = "RFFSHeli_Bell429_TeddyHyperBeast_Wreck";
	}
	
	override void AttachHeliParts() 			
	{
		if (!m_heli_parts_added)
		{
			EntityAI entity_Bell429;
			if ( Class.CastTo(entity_Bell429, this) )
			{
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_Driverdoor_TeddyHyperBeast" );
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_Codriverdoor_TeddyHyperBeast" );
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_Cargo1_TeddyHyperBeast" );
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_Cargo2_TeddyHyperBeast" );
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_Cargo3_TeddyHyperBeast" );
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_Cargo4_TeddyHyperBeast" );
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_interior_TeddyHyperBeast" );
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_rearseats_TeddyHyperBeast" );
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_skids_TeddyHyperBeast" );
				m_heli_parts_added = true;
				m_attachement_timer = GetGame().GetTime();
			}			
		}
	}
}

class RFFSHeli_Bell429_TeddyHyperBeast_Wreck extends RFFSHeli_Bell429_Wreck {}