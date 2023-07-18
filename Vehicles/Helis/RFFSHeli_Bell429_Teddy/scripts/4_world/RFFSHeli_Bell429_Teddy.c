class RFFSHeli_Bell429_Teddy extends RFFSHeli_Bell429
{
	void RFFSHeli_Bell429_Teddy() 
	{
		c_heli_wreck_model = "RFFSHeli_Bell429_Teddy_Wreck";
	}
	
	override void AttachHeliParts() 			
	{
		if (!m_heli_parts_added)
		{
			EntityAI entity_Bell429;
			if ( Class.CastTo(entity_Bell429, this) )
			{
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_Driverdoor_Teddy" );
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_Codriverdoor_Teddy" );
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_Cargo1_Teddy" );
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_Cargo2_Teddy" );
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_Cargo3_Teddy" );
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_Cargo4_Teddy" );
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_interior_Teddy" );
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_rearseats_Teddy" );
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_skids_Teddy" );
				m_heli_parts_added = true;
				m_attachement_timer = GetGame().GetTime();
			}			
		}
	}
}

class RFFSHeli_Bell429_Teddy_Wreck extends RFFSHeli_Bell429_Wreck {}





